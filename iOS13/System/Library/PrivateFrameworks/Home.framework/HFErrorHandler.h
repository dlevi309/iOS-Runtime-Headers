/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@interface HFErrorHandler : NSObject {

	BOOL _presentingAlert;

}

@property (assign,getter=isPresentingAlert,nonatomic) BOOL presentingAlert;              //@synthesize presentingAlert=_presentingAlert - In the implementation block
+(id)sharedHandler;
+(id)descriptionLocalizationKeyForError:(id)arg1 ;
+(id)_descriptionForHMErrorCode:(long long)arg1 ;
+(id)_descriptionForHFErrorCode:(long long)arg1 ;
-(id)init;
-(void)handleError:(id)arg1 ;
-(BOOL)isPresentingAlert;
-(void)logError:(id)arg1 operationDescription:(id)arg2 ;
-(void)handleError:(id)arg1 operationType:(id)arg2 options:(id)arg3 retryBlock:(/*^block*/id)arg4 cancelBlock:(/*^block*/id)arg5 ;
-(BOOL)_isErrorIndicativeOfApplicationBug:(id)arg1 operationType:(id)arg2 options:(id)arg3 ;
-(BOOL)canIgnoreError:(id)arg1 ;
-(id)_localizedTitleForError:(id)arg1 operationType:(id)arg2 options:(id)arg3 ;
-(id)_localizedDescriptionForError:(id)arg1 operationType:(id)arg2 options:(id)arg3 ;
-(BOOL)_isErrorPermanent:(id)arg1 operationType:(id)arg2 options:(id)arg3 ;
-(void)setPresentingAlert:(BOOL)arg1 ;
-(id)_localizedStringOrNilIfNotFoundForKey:(id)arg1 ;
-(void)handleError:(id)arg1 retryBlock:(/*^block*/id)arg2 cancelBlock:(/*^block*/id)arg3 ;
@end

