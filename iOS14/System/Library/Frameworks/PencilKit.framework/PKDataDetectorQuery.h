/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PKQuery.h>
#import <libobjc.A.dylib/CHQueryDelegate.h>

@class CHDataDetectorQuery, NSString;

@interface PKDataDetectorQuery : PKQuery <CHQueryDelegate> {

	CHDataDetectorQuery* _dataDetectorQuery;

}

@property (nonatomic,retain) CHDataDetectorQuery * dataDetectorQuery;              //@synthesize dataDetectorQuery=_dataDetectorQuery - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)start;
-(void)pause;
-(void)teardown;
-(void)dealloc;
-(id)initWithRecognitionSessionManager:(id)arg1 ;
-(void)queryDidUpdateResult:(id)arg1 ;
-(void)setDataDetectorQuery:(CHDataDetectorQuery *)arg1 ;
-(CHDataDetectorQuery *)dataDetectorQuery;
@end

