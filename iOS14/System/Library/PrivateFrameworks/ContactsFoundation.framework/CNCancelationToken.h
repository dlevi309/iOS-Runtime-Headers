/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <libobjc.A.dylib/CNCancelable.h>
#import <libobjc.A.dylib/CNCancelationToken.h>

@protocol CNCancelationToken <NSObject>
@required
-(BOOL)isCanceled;
-(void)performBlock:(/*^block*/id)arg1;

@end


@class NSMutableArray, NSString;

@interface CNCancelationToken : NSObject <CNCancelable, CNCancelationToken> {

	BOOL _isCanceled;
	NSMutableArray* _cancelationBlocks;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)tokenWithCancelationBlock:(/*^block*/id)arg1 ;
+(id)tokenWrappingCancelable:(id)arg1 ;
-(BOOL)isCanceled;
-(id)init;
-(void)performBlock:(/*^block*/id)arg1 ;
-(void)addCancelable:(id)arg1 ;
-(id)nts_cancel;
-(void)callCancelationBlocks:(id)arg1 ;
-(void)addCancelationBlock:(/*^block*/id)arg1 ;
-(void)cancel;
@end

