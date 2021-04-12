/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSWPReplaceAction.h>

@class TSWPChangeSession, NSString;

@interface TSWPTrackedDeletion : NSObject <TSWPReplaceAction> {

	NSRange _range;
	TSWPChangeSession* _changeSession;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(long long)delta;
-(NSRange)insertedRange;
-(void)performWithStorage:(id)arg1 delta:(long long)arg2 undoTransaction:(TSWPStorageTransaction*)arg3 replaceBlock:(/*^block*/id)arg4 ;
-(unsigned long long)targetCharIndex;
-(id)initWithRange:(NSRange)arg1 changeSession:(id)arg2 ;
@end

