/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/


@protocol OS_os_transaction;
@class NSObject;

@interface PLXPCTransaction : NSObject {

	const char* _identifier;
	NSObject*<OS_os_transaction> _transaction;

}
+(void)initialize;
+(id)transaction:(const char*)arg1 ;
+(void)_startTrackingTransaction:(id)arg1 ;
+(void)discardCallStackSymbols:(id)arg1 ;
+(id)callStackSymbols;
+(void)_stopTrackingTransaction:(id)arg1 ;
+(id)openXPCTransactionStatus;
-(id)description;
-(id)_statusDescription;
-(void)stillAlive;
-(id)initWithIdentifier:(const char*)arg1 ;
-(void)dealloc;
@end

