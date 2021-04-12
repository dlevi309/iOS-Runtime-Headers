/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCOperationCanceling.h>

@class NSArray, NSString;

@interface FCGroupCancelHandler : NSObject <FCOperationCanceling> {

	NSArray* _cancelHandlers;

}

@property (nonatomic,copy) NSArray * cancelHandlers;                //@synthesize cancelHandlers=_cancelHandlers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)groupCancelHandlerWithCancelHandlers:(id)arg1 ;
-(void)cancel;
-(id)initWithCancelHandlers:(id)arg1 ;
-(NSArray *)cancelHandlers;
-(void)setCancelHandlers:(NSArray *)arg1 ;
@end

