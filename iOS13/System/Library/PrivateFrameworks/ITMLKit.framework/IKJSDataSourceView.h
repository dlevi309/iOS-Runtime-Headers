/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id<IKJSDataSourceViewDelegate>)delegate;
-(void)setDelegate:(id<IKJSDataSourceViewDelegate>)arg1 ;
-(void)reset;
-(IKJSDataSource *)dataSource;
-(NSRange)usedIndexRange;
-(id)initForDataSource:(id)arg1 ;
-(void)setUsedIndexRange:(NSRange)arg1 ;
@end

