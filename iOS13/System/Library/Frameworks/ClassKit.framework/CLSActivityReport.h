/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(CLSAggregatedValue *)progress;
-(CLSAggregatedValue *)time;
-(NSString *)contextID;
-(void)setContextID:(NSString *)arg1 ;
-(void)setTime:(CLSAggregatedValue *)arg1 ;
-(void)setProgress:(CLSAggregatedValue *)arg1 ;
-(long long)contextType;
-(void)setContextType:(long long)arg1 ;
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

