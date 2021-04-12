/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)archiver:(id)arg1 willEncodeObject:(id)arg2 ;
-(NSMutableSet *)objects;
@end

