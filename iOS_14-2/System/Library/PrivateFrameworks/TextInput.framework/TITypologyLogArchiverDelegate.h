/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <libobjc.A.dylib/NSKeyedArchiverDelegate.h>

@class NSMutableSet, NSString;

@interface TITypologyLogArchiverDelegate : NSObject <NSKeyedArchiverDelegate> {

	NSMutableSet* _objects;

}

@property (nonatomic,readonly) NSMutableSet * objects;              //@synthesize objects=_objects - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMutableSet *)objects;
-(id)init;
-(id)archiver:(id)arg1 willEncodeObject:(id)arg2 ;
@end

