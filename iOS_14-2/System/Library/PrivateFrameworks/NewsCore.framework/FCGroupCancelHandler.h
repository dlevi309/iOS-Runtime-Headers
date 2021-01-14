/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)cancelHandlers;
-(id)initWithCancelHandlers:(id)arg1 ;
-(void)cancel;
-(void)setCancelHandlers:(NSArray *)arg1 ;
@end

