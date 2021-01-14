/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/

#import <MetricsKit/MTObject.h>

@protocol MTEventDataProviderDelegate;
@class NSDictionary, NSArray;

@interface MTEventDataProvider : MTObject {

	id<MTEventDataProviderDelegate> _delegate;
	NSDictionary* _knownFieldMethods;
	NSArray* _additionalData;

}

@property (nonatomic,retain) NSDictionary * knownFieldMethods;                             //@synthesize knownFieldMethods=_knownFieldMethods - In the implementation block
@property (retain) NSArray * additionalData;                                               //@synthesize additionalData=_additionalData - In the implementation block
@property (assign,nonatomic,__weak) id<MTEventDataProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)addFields:(id)arg1 ;
-(id<MTEventDataProviderDelegate>)delegate;
-(void)setDelegate:(id<MTEventDataProviderDelegate>)arg1 ;
-(id)knownFields;
-(void)setAdditionalData:(NSArray *)arg1 ;
-(NSArray *)additionalData;
-(id)processMetricsData:(id)arg1 performanceData:(id)arg2 ;
-(id)flattenAdditionalData;
-(void)addFieldsWithDictionary:(id)arg1 ;
-(void)addFieldsWithPromise:(id)arg1 ;
-(id)knownFieldMethodsForKnownFields:(id)arg1 ;
-(SEL)knownFieldAccessorForFieldName:(id)arg1 ;
-(NSDictionary *)knownFieldMethods;
-(void)addFieldsWithBlock:(/*^block*/id)arg1 ;
-(void)setKnownFieldMethods:(NSDictionary *)arg1 ;
@end

