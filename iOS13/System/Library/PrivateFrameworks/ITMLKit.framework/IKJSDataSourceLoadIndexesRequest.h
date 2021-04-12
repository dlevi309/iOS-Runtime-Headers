/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <ITMLKit/IKJSEventListenerObject.h>
#import <libobjc.A.dylib/IKJSDataSourceLoadIndexesRequest.h>
@class JSValue;


@protocol IKJSDataSourceLoadIndexesRequest <IKJSEventListenerObject,JSExport>
@property (nonatomic,__weak,readonly) JSValue * dataSource; 
@property (nonatomic,readonly) NSRange range; 
@required
-(NSRange)range;
-(JSValue *)dataSource;
-(void)close:(BOOL)arg1;

@end


@class JSValue, IKJSDataSource;

@interface IKJSDataSourceLoadIndexesRequest : IKJSEventListenerObject <IKJSDataSourceLoadIndexesRequest> {

	int _state;
	IKJSDataSource* _dataSource;
	/*^block*/id _completion;
	NSRange _range;

}

@property (nonatomic,copy) id completion;                                //@synthesize completion=_completion - In the implementation block
@property (nonatomic,readonly) BOOL isClosed; 
@property (nonatomic,__weak,readonly) JSValue * dataSource; 
@property (nonatomic,readonly) NSRange range;                            //@synthesize range=_range - In the implementation block
-(void)dealloc;
-(void)cancel;
-(NSRange)range;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(JSValue *)dataSource;
-(BOOL)isClosed;
-(void)close:(BOOL)arg1 ;
-(id)initWithDataSource:(id)arg1 range:(NSRange)arg2 ;
@end

