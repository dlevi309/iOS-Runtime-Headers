/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
*/

#import <AppStoreComponents/AppStoreComponents-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/ASCViewModel.h>

@protocol ASCOffer;
@class ASCAdamID, ASCViewMetrics, NSString, ASCArtwork, NSArray, NSSet;

@interface ASCLockup : NSObject <NSSecureCoding, NSCopying, ASCViewModel> {

	ASCAdamID* _id;
	NSString* _kind;
	ASCViewMetrics* _metrics;
	ASCArtwork* _icon;
	NSString* _heading;
	NSString* _title;
	NSString* _subtitle;
	NSString* _ageRating;
	id<ASCOffer> _offer;
	NSArray* _features;

}

@property (nonatomic,copy,readonly) NSSet * signpostTags; 
@property (nonatomic,copy,readonly) NSArray * features;                    //@synthesize features=_features - In the implementation block
@property (nonatomic,copy,readonly) ASCAdamID * id;                        //@synthesize id=_id - In the implementation block
@property (nonatomic,copy,readonly) NSString * kind;                       //@synthesize kind=_kind - In the implementation block
@property (nonatomic,copy,readonly) ASCViewMetrics * metrics;              //@synthesize metrics=_metrics - In the implementation block
@property (nonatomic,copy,readonly) ASCArtwork * icon;                     //@synthesize icon=_icon - In the implementation block
@property (nonatomic,copy,readonly) NSString * heading;                    //@synthesize heading=_heading - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                      //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                   //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * ageRating;                  //@synthesize ageRating=_ageRating - In the implementation block
@property (nonatomic,copy,readonly) id<ASCOffer> offer;                    //@synthesize offer=_offer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(ASCAdamID *)id;
-(NSString *)heading;
-(ASCViewMetrics *)metrics;
-(NSArray *)features;
-(ASCArtwork *)icon;
-(NSString *)subtitle;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithID:(id)arg1 kind:(id)arg2 icon:(id)arg3 heading:(id)arg4 title:(id)arg5 subtitle:(id)arg6 ageRating:(id)arg7 offer:(id)arg8 ;
-(NSString *)kind;
-(NSString *)description;
-(NSString *)ageRating;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithID:(id)arg1 kind:(id)arg2 metrics:(id)arg3 icon:(id)arg4 heading:(id)arg5 title:(id)arg6 subtitle:(id)arg7 ageRating:(id)arg8 offer:(id)arg9 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<ASCOffer>)offer;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
-(NSSet *)signpostTags;
-(id)featureWithClass:(Class)arg1 ;
-(id)lockupByAddingFeature:(id)arg1 ;
-(id)lockupWithSignpostTags:(id)arg1 ;
-(id)initWithID:(id)arg1 kind:(id)arg2 metrics:(id)arg3 icon:(id)arg4 heading:(id)arg5 title:(id)arg6 subtitle:(id)arg7 ageRating:(id)arg8 offer:(id)arg9 features:(id)arg10 ;
-(id)lockupWithOffer:(id)arg1 ;
@end

