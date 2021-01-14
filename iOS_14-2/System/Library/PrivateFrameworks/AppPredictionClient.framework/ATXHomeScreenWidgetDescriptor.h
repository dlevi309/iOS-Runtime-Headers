/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/

#import <AppPredictionClient/AppPredictionClient-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/ATXDefaultHomeScreenItem.h>

@class NSString, CHSAvocadoDescriptor;

@interface ATXHomeScreenWidgetDescriptor : NSObject <NSSecureCoding, NSCopying, ATXDefaultHomeScreenItem> {

	NSString* _appBundleId;
	CHSAvocadoDescriptor* _avocadoDescriptor;
	unsigned long long _suggestedSize;
	long long _rankType;

}

@property (nonatomic,copy) NSString * appBundleId;                                //@synthesize appBundleId=_appBundleId - In the implementation block
@property (nonatomic,copy) CHSAvocadoDescriptor * avocadoDescriptor;              //@synthesize avocadoDescriptor=_avocadoDescriptor - In the implementation block
@property (assign,nonatomic) unsigned long long suggestedSize;                    //@synthesize suggestedSize=_suggestedSize - In the implementation block
@property (assign,nonatomic) long long rankType;                                  //@synthesize rankType=_rankType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)extensionBundleId;
-(id)dictionaryRepresentation;
-(id)widgetKind;
-(void)setAppBundleId:(NSString *)arg1 ;
-(NSString *)appBundleId;
-(unsigned long long)suggestedSize;
-(CHSAvocadoDescriptor *)avocadoDescriptor;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(long long)rankType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setSuggestedSize:(unsigned long long)arg1 ;
-(void)setAvocadoDescriptor:(CHSAvocadoDescriptor *)arg1 ;
-(void)setRankType:(long long)arg1 ;
@end

