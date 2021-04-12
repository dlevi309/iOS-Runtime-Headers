/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

