/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/NSObject.h>
#import <libobjc.A.dylib/IKJSImpression.h>

@protocol IKJSImpression <JSExport>
@end

#import <libobjc.A.dylib/_IKJSImpressionProxy.h>
#import <libobjc.A.dylib/_IKJSImpression.h>

@class NSString, NSArray, NSMutableArray;

@interface IKJSImpression : IKJSObject <NSObject, IKJSImpression, _IKJSImpressionProxy, _IKJSImpression> {

	IKJSImpression* _parentImpression;
	NSString* _metricsTag;
	NSString* _metricsData;
	NSMutableArray* _mutableTimestamps;
	NSMutableArray* _mutableChildren;
	long long _indexInParent;

}

@property (nonatomic,copy) NSString * metricsTag;                                   //@synthesize metricsTag=_metricsTag - In the implementation block
@property (nonatomic,copy) NSString * metricsData;                                  //@synthesize metricsData=_metricsData - In the implementation block
@property (nonatomic,retain) NSMutableArray * mutableTimestamps;                    //@synthesize mutableTimestamps=_mutableTimestamps - In the implementation block
@property (nonatomic,retain) NSMutableArray * mutableChildren;                      //@synthesize mutableChildren=_mutableChildren - In the implementation block
@property (assign,nonatomic,__weak) IKJSImpression * parentImpression;              //@synthesize parentImpression=_parentImpression - In the implementation block
@property (assign,nonatomic) long long indexInParent;                               //@synthesize indexInParent=_indexInParent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * data; 
@property (nonatomic,readonly) NSArray * timestamps; 
@property (nonatomic,readonly) NSArray * children; 
@property (nonatomic,readonly) id parent; 
@property (nonatomic,readonly) long long index; 
@property (nonatomic,readonly) NSString * impressionQueueTag; 
+(id)impressionsMapForViewElements:(id)arg1 appContext:(id)arg2 timestamp:(long long)arg3 existingImpressionsMap:(id)arg4 ;
+(id)impressionsMapForViewElements:(id)arg1 appContext:(id)arg2 timestamp:(long long)arg3 ;
-(NSString *)description;
-(void)addChild:(id)arg1 ;
-(id)parent;
-(NSString *)data;
-(long long)index;
-(NSArray *)timestamps;
-(NSArray *)children;
-(IKJSImpression *)parentImpression;
-(void)linkReferences;
-(NSString *)impressionQueueTag;
-(id)initWithAppContext:(id)arg1 data:(id)arg2 index:(unsigned long long)arg3 queueTag:(id)arg4 ;
-(void)addTimestamp:(long long)arg1 ;
-(NSMutableArray *)mutableTimestamps;
-(NSMutableArray *)mutableChildren;
-(NSString *)metricsTag;
-(NSString *)metricsData;
-(long long)indexInParent;
-(void)setMutableTimestamps:(NSMutableArray *)arg1 ;
-(void)setMutableChildren:(NSMutableArray *)arg1 ;
-(void)setParentImpression:(IKJSImpression *)arg1 ;
-(id)asPrivateIKJSImpression;
-(void)setMetricsTag:(NSString *)arg1 ;
-(void)setMetricsData:(NSString *)arg1 ;
-(void)setIndexInParent:(long long)arg1 ;
@end

