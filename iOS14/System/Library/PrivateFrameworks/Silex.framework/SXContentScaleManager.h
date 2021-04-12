/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXContentScaleManager.h>

@protocol SXContentScaleManager <NSObject>
@property (nonatomic,readonly) long long contentScale; 
@property (nonatomic,readonly) double contentScaleFactor; 
@property (assign,nonatomic,__weak) id<SXContentScaleManagerDelegate> delegate; 
@required
-(id<SXContentScaleManagerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(double)contentScaleFactor;
-(void)reset;
-(void)increase;
-(void)decrease;
-(long long)contentScale;

@end


@protocol SXContentScaleManagerDelegate;
@class NSString;

@interface SXContentScaleManager : NSObject <SXContentScaleManager> {

	long long _contentScale;
	double _contentScaleFactor;
	id<SXContentScaleManagerDelegate> _delegate;

}

@property (assign,nonatomic) long long contentScale;                                         //@synthesize contentScale=_contentScale - In the implementation block
@property (nonatomic,readonly) double contentScaleFactor;                                    //@synthesize contentScaleFactor=_contentScaleFactor - In the implementation block
@property (assign,nonatomic,__weak) id<SXContentScaleManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXContentScaleManagerDelegate>)delegate;
-(void)setDelegate:(id<SXContentScaleManagerDelegate>)arg1 ;
-(double)contentScaleFactor;
-(void)reset;
-(void)increase;
-(void)decrease;
-(long long)contentScale;
-(void)setContentScale:(long long)arg1 ;
-(id)initWithContentScale:(long long)arg1 ;
@end

