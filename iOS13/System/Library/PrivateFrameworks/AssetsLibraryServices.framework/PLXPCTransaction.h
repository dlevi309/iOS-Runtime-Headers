/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/


@protocol OS_os_transaction;
@class NSObject;

@interface PLXPCTransaction : NSObject {

	const char* _identifier;
	NSObject*<OS_os_transaction> _transaction;

}
+(void)initialize;
+(id)callStackSymbols;
+(id)transaction:(const char*)arg1 ;
+(id)openXPCTransactionStatus;
+(void)_stopTrackingTransaction:(id)arg1 ;
+(void)_startTrackingTransaction:(id)arg1 ;
+(void)discardCallStackSymbols:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)initWithIdentifier:(const char*)arg1 ;
-(void)stillAlive;
-(id)_statusDescription;
@end

