/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)reset;
-(double)contentScaleFactor;
-(long long)contentScale;
-(void)increase;
-(void)decrease;

@end


@protocol SXContentScaleManagerDelegate;
@class NSString;

@interface SXContentScaleManager : NSObject <SXContentScaleManager> {

	long long _contentScale;
	double _contentScaleFactor;
	id<SXContentScaleManagerDelegate> _delegate;

}

@property (assign,nonatomic) long long contentScale;                                         //@synthesize contentScale=_contentScale - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double contentScaleFactor;                                    //@synthesize contentScaleFactor=_contentScaleFactor - In the implementation block
@property (assign,nonatomic,__weak) id<SXContentScaleManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<SXContentScaleManagerDelegate>)delegate;
-(void)setDelegate:(id<SXContentScaleManagerDelegate>)arg1 ;
-(void)reset;
-(double)contentScaleFactor;
-(long long)contentScale;
-(void)setContentScale:(long long)arg1 ;
-(void)increase;
-(void)decrease;
-(id)initWithContentScale:(long long)arg1 ;
@end

