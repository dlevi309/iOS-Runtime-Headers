/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCOperation.h>

@class FCOperation;

@interface FCProxyOperation : FCOperation {

	FCOperation* _underlyingOperation;

}

@property (nonatomic,retain) FCOperation * underlyingOperation;              //@synthesize underlyingOperation=_underlyingOperation - In the implementation block
+(void)initialize;
+(id)proxyForOperation:(id)arg1 ;
-(void)setQualityOfService:(long long)arg1 ;
-(FCOperation *)underlyingOperation;
-(void)performOperation;
-(void)operationDidFinishWithError:(id)arg1 ;
-(void)setRelativePriority:(long long)arg1 ;
-(unsigned long long)propertiesInheritedByChildOperations;
-(void)_revisitQualityOfService;
-(void)_revisitRelativePriority;
-(void)setUnderlyingOperation:(FCOperation *)arg1 ;
@end

