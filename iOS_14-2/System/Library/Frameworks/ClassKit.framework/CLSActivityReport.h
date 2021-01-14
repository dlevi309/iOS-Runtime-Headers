/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
*/

#import <ClassKit/ClassKit-Structs.h>
#import <ClassKit/CLSReportItem.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CLSAggregatedValue, CLSActivityReportItem, NSArray;

@interface CLSActivityReport : CLSReportItem <NSSecureCoding, NSCopying> {

	long long _contextType;
	NSString* _contextTopic;
	NSString* _contextTitle;
	NSString* _contextAppBundleIdentifier;
	NSString* _contextID;
	CLSAggregatedValue* _time;
	CLSAggregatedValue* _progress;
	CLSActivityReportItem* _primaryReportItem;
	NSArray* _additionalReportItems;
	NSString* _contextStableObjectID;

}

@property (assign,nonatomic) long long contextType;                                //@synthesize contextType=_contextType - In the implementation block
@property (nonatomic,copy) NSString * contextTopic;                                //@synthesize contextTopic=_contextTopic - In the implementation block
@property (nonatomic,copy) NSString * contextTitle;                                //@synthesize contextTitle=_contextTitle - In the implementation block
@property (nonatomic,copy) NSString * contextAppBundleIdentifier;                  //@synthesize contextAppBundleIdentifier=_contextAppBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * contextID;                                   //@synthesize contextID=_contextID - In the implementation block
@property (nonatomic,copy) CLSAggregatedValue * time;                              //@synthesize time=_time - In the implementation block
@property (nonatomic,copy) CLSAggregatedValue * progress;                          //@synthesize progress=_progress - In the implementation block
@property (nonatomic,copy) CLSActivityReportItem * primaryReportItem;              //@synthesize primaryReportItem=_primaryReportItem - In the implementation block
@property (nonatomic,copy) NSArray * additionalReportItems;                        //@synthesize additionalReportItems=_additionalReportItems - In the implementation block
@property (nonatomic,copy) NSString * contextStableObjectID;                       //@synthesize contextStableObjectID=_contextStableObjectID - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)contextType;
-(id)dictionaryRepresentation;
-(CLSAggregatedValue *)time;
-(long long)compare:(id)arg1 ;
-(void)setTime:(CLSAggregatedValue *)arg1 ;
-(void)setContextType:(long long)arg1 ;
-(CLSAggregatedValue *)progress;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setContextID:(NSString *)arg1 ;
-(NSString *)contextID;
-(void)setProgress:(CLSAggregatedValue *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)add:(id)arg1 ;
-(void)scalarMultiply:(double)arg1 ;
-(NSString *)contextTopic;
-(void)setContextTopic:(NSString *)arg1 ;
-(NSString *)contextTitle;
-(void)setContextTitle:(NSString *)arg1 ;
-(NSString *)contextAppBundleIdentifier;
-(void)setContextAppBundleIdentifier:(NSString *)arg1 ;
-(CLSActivityReportItem *)primaryReportItem;
-(void)setPrimaryReportItem:(CLSActivityReportItem *)arg1 ;
-(NSArray *)additionalReportItems;
-(void)setAdditionalReportItems:(NSArray *)arg1 ;
-(NSString *)contextStableObjectID;
-(void)setContextStableObjectID:(NSString *)arg1 ;
@end

