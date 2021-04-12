/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCOperationCanceling.h>
#import <libobjc.A.dylib/FCOperationIdentifying.h>

@protocol FCOperationCancelingFCOperationIdentifying;
@class NSString, NSMutableArray;

@interface FCAVAssetDownload : NSObject <FCOperationCanceling, FCOperationIdentifying> {

	NSString* _assetID;
	id<FCOperationCanceling><FCOperationIdentifying> _underlyingOperation;
	NSMutableArray* _completionHandlers;

}

@property (nonatomic,copy,readonly) NSString * assetID;                                                           //@synthesize assetID=_assetID - In the implementation block
@property (nonatomic,readonly) id<FCOperationCanceling><FCOperationIdentifying> underlyingOperation;              //@synthesize underlyingOperation=_underlyingOperation - In the implementation block
@property (nonatomic,readonly) NSMutableArray * completionHandlers;                                               //@synthesize completionHandlers=_completionHandlers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<FCOperationCanceling><FCOperationIdentifying>)underlyingOperation;
-(NSString *)assetID;
-(id)longOperationDescription;
-(id)initWithAssetID:(id)arg1 underlyingOperation:(id)arg2 ;
-(NSMutableArray *)completionHandlers;
-(void)cancel;
-(id)shortOperationDescription;
@end

