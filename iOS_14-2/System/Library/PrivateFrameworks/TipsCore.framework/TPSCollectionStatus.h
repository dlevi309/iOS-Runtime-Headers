/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
*/

#import <TipsCore/TipsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface TPSCollectionStatus : NSObject <NSCopying, NSSecureCoding> {

	BOOL _canNotified;
	BOOL _skipFeature;
	NSString* _identifier;
	NSDate* _activatedDate;
	NSDate* _firstViewedDate;
	NSDate* _featuredDate;

}

@property (assign,nonatomic) BOOL canNotified;                    //@synthesize canNotified=_canNotified - In the implementation block
@property (assign,nonatomic) BOOL skipFeature;                    //@synthesize skipFeature=_skipFeature - In the implementation block
@property (nonatomic,copy) NSString * identifier;                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSDate * activatedDate;                //@synthesize activatedDate=_activatedDate - In the implementation block
@property (nonatomic,copy) NSDate * firstViewedDate;              //@synthesize firstViewedDate=_firstViewedDate - In the implementation block
@property (nonatomic,copy) NSDate * featuredDate;                 //@synthesize featuredDate=_featuredDate - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)skipFeature;
-(void)setActivatedDate:(NSDate *)arg1 ;
-(void)setFeaturedDate:(NSDate *)arg1 ;
-(void)setFirstViewedDate:(NSDate *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(NSDate *)activatedDate;
-(void)setCanNotified:(BOOL)arg1 ;
-(NSDate *)firstViewedDate;
-(id)initWithCoder:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(BOOL)canNotified;
-(id)initWithIdentifier:(id)arg1 ;
-(void)setSkipFeature:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)featuredDate;
@end

