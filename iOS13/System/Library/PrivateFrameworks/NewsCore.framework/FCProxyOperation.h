/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setRelativePriority:(long long)arg1 ;
-(void)performOperation;
-(void)setUnderlyingOperation:(FCOperation *)arg1 ;
-(FCOperation *)underlyingOperation;
-(unsigned long long)propertiesInheritedByChildOperations;
-(void)operationDidFinishWithError:(id)arg1 ;
-(void)_revisitRelativePriority;
-(void)_revisitQualityOfService;
@end

