/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/


@protocol IKJSDataSourceViewDelegate;
#import <ITMLKit/ITMLKit-Structs.h>
@class IKJSDataSource;

@interface IKJSDataSourceView : NSObject {

	struct {
		BOOL hasDidReset;
	}  _delegateFlags;
	IKJSDataSource* _dataSource;
	id<IKJSDataSourceViewDelegate> _delegate;
	NSRange _usedIndexRange;

}

@property (nonatomic,__weak,readonly) IKJSDataSource * dataSource;                        //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<IKJSDataSourceViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) NSRange usedIndexRange;                                      //@synthesize usedIndexRange=_usedIndexRange - In the implementation block
-(id<IKJSDataSourceViewDelegate>)delegate;
-(IKJSDataSource *)dataSource;
-(void)setDelegate:(id<IKJSDataSourceViewDelegate>)arg1 ;
-(void)reset;
-(void)dealloc;
-(NSRange)usedIndexRange;
-(id)initForDataSource:(id)arg1 ;
-(void)setUsedIndexRange:(NSRange)arg1 ;
@end

