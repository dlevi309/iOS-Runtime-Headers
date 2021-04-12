/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Messages.framework/Messages
*/


@class NSHashTable;

@interface _MSTempFileManager : NSObject {

	NSHashTable* _registry;

}

@property (nonatomic,readonly) NSHashTable * registry;              //@synthesize registry=_registry - In the implementation block
+(id)sharedInstance;
-(id)init;
-(NSHashTable *)registry;
-(id)writeTemporaryFileWithData:(id)arg1 type:(id)arg2 ;
@end

