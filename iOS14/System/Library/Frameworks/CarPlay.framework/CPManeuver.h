/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
*/

#import <CarPlay/CarPlay-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CPImageSet, NSArray, CPTravelEstimates, NSUUID, NSMeasurement, NSSet, UIImage;

@interface CPManeuver : NSObject <NSCopying, NSSecureCoding> {

	CPImageSet* _symbolSet;
	NSArray* _instructionVariants;
	CPTravelEstimates* _initialTravelEstimates;
	NSArray* _attributedInstructionVariants;
	NSArray* _dashboardInstructionVariants;
	NSArray* _dashboardAttributedInstructionVariants;
	NSArray* _notificationInstructionVariants;
	NSArray* _notificationAttributedInstructionVariants;
	id _userInfo;
	NSUUID* _identifier;
	unsigned long long _maneuverType;
	NSArray* _roadFollowingManeuverVariants;
	unsigned long long _trafficSide;
	unsigned long long _junctionType;
	NSMeasurement* _junctionExitAngle;
	NSSet* _junctionElementAngles;
	long long _displayStyle;
	CPImageSet* _junctionImageSet;
	CPImageSet* _dashboardSymbolImageSet;
	CPImageSet* _dashboardJunctionImageSet;
	CPImageSet* _notificationSymbolImageSet;

}

@property (nonatomic,readonly) NSUUID * identifier;                                          //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) unsigned long long maneuverType;                                //@synthesize maneuverType=_maneuverType - In the implementation block
@property (nonatomic,copy) NSArray * roadFollowingManeuverVariants;                          //@synthesize roadFollowingManeuverVariants=_roadFollowingManeuverVariants - In the implementation block
@property (assign,nonatomic) unsigned long long trafficSide;                                 //@synthesize trafficSide=_trafficSide - In the implementation block
@property (assign,nonatomic) unsigned long long junctionType;                                //@synthesize junctionType=_junctionType - In the implementation block
@property (nonatomic,copy) NSMeasurement * junctionExitAngle;                                //@synthesize junctionExitAngle=_junctionExitAngle - In the implementation block
@property (nonatomic,copy) NSSet * junctionElementAngles;                                    //@synthesize junctionElementAngles=_junctionElementAngles - In the implementation block
@property (readonly) NSArray * stringInstructionVariants; 
@property (assign,nonatomic) long long displayStyle;                                         //@synthesize displayStyle=_displayStyle - In the implementation block
@property (nonatomic,retain) CPImageSet * junctionImageSet;                                  //@synthesize junctionImageSet=_junctionImageSet - In the implementation block
@property (nonatomic,retain) CPImageSet * dashboardSymbolImageSet;                           //@synthesize dashboardSymbolImageSet=_dashboardSymbolImageSet - In the implementation block
@property (nonatomic,retain) CPImageSet * dashboardJunctionImageSet;                         //@synthesize dashboardJunctionImageSet=_dashboardJunctionImageSet - In the implementation block
@property (nonatomic,retain) CPImageSet * notificationSymbolImageSet;                        //@synthesize notificationSymbolImageSet=_notificationSymbolImageSet - In the implementation block
@property (nonatomic,retain) CPImageSet * symbolSet;                                         //@synthesize symbolSet=_symbolSet - In the implementation block
@property (nonatomic,retain) UIImage * symbolImage; 
@property (nonatomic,retain) UIImage * junctionImage; 
@property (nonatomic,copy) NSArray * instructionVariants;                                    //@synthesize instructionVariants=_instructionVariants - In the implementation block
@property (nonatomic,retain) CPTravelEstimates * initialTravelEstimates;                     //@synthesize initialTravelEstimates=_initialTravelEstimates - In the implementation block
@property (nonatomic,copy) NSArray * attributedInstructionVariants;                          //@synthesize attributedInstructionVariants=_attributedInstructionVariants - In the implementation block
@property (nonatomic,retain) UIImage * dashboardSymbolImage; 
@property (nonatomic,retain) UIImage * dashboardJunctionImage; 
@property (nonatomic,copy) NSArray * dashboardInstructionVariants;                           //@synthesize dashboardInstructionVariants=_dashboardInstructionVariants - In the implementation block
@property (nonatomic,copy) NSArray * dashboardAttributedInstructionVariants;                 //@synthesize dashboardAttributedInstructionVariants=_dashboardAttributedInstructionVariants - In the implementation block
@property (nonatomic,retain) UIImage * notificationSymbolImage; 
@property (nonatomic,copy) NSArray * notificationInstructionVariants;                        //@synthesize notificationInstructionVariants=_notificationInstructionVariants - In the implementation block
@property (nonatomic,copy) NSArray * notificationAttributedInstructionVariants;              //@synthesize notificationAttributedInstructionVariants=_notificationAttributedInstructionVariants - In the implementation block
@property (nonatomic,retain) id userInfo;                                                    //@synthesize userInfo=_userInfo - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_descriptionForManeuverType:(unsigned long long)arg1 ;
+(id)_descriptionForTrafficSide:(unsigned long long)arg1 ;
+(id)_descriptionForJunctionType:(unsigned long long)arg1 ;
-(void)setUserInfo:(id)arg1 ;
-(id)userInfo;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSymbolImage:(UIImage *)arg1 ;
-(UIImage *)symbolImage;
-(void)setDisplayStyle:(long long)arg1 ;
-(id)description;
-(unsigned long long)maneuverType;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)junctionType;
-(void)setJunctionType:(unsigned long long)arg1 ;
-(NSUUID *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setManeuverType:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)displayStyle;
-(CPImageSet *)symbolSet;
-(NSArray *)instructionVariants;
-(NSArray *)attributedInstructionVariants;
-(NSArray *)roadFollowingManeuverVariants;
-(CPTravelEstimates *)initialTravelEstimates;
-(unsigned long long)trafficSide;
-(NSMeasurement *)junctionExitAngle;
-(NSSet *)junctionElementAngles;
-(CPImageSet *)junctionImageSet;
-(CPImageSet *)dashboardSymbolImageSet;
-(NSArray *)dashboardInstructionVariants;
-(NSArray *)dashboardAttributedInstructionVariants;
-(CPImageSet *)dashboardJunctionImageSet;
-(CPImageSet *)notificationSymbolImageSet;
-(NSArray *)notificationInstructionVariants;
-(NSArray *)notificationAttributedInstructionVariants;
-(void)setSymbolSet:(CPImageSet *)arg1 ;
-(void)setJunctionImageSet:(CPImageSet *)arg1 ;
-(void)setInstructionVariants:(NSArray *)arg1 ;
-(void)setAttributedInstructionVariants:(NSArray *)arg1 ;
-(void)setRoadFollowingManeuverVariants:(NSArray *)arg1 ;
-(void)setInitialTravelEstimates:(CPTravelEstimates *)arg1 ;
-(void)setTrafficSide:(unsigned long long)arg1 ;
-(void)setJunctionExitAngle:(NSMeasurement *)arg1 ;
-(void)setJunctionElementAngles:(NSSet *)arg1 ;
-(void)setDashboardSymbolImageSet:(CPImageSet *)arg1 ;
-(void)setDashboardInstructionVariants:(NSArray *)arg1 ;
-(void)setDashboardAttributedInstructionVariants:(NSArray *)arg1 ;
-(void)setDashboardJunctionImageSet:(CPImageSet *)arg1 ;
-(void)setNotificationSymbolImageSet:(CPImageSet *)arg1 ;
-(void)setNotificationInstructionVariants:(NSArray *)arg1 ;
-(void)setNotificationAttributedInstructionVariants:(NSArray *)arg1 ;
-(UIImage *)junctionImage;
-(NSArray *)stringInstructionVariants;
-(void)setJunctionImage:(UIImage *)arg1 ;
-(UIImage *)dashboardSymbolImage;
-(void)setDashboardSymbolImage:(UIImage *)arg1 ;
-(UIImage *)dashboardJunctionImage;
-(void)setDashboardJunctionImage:(UIImage *)arg1 ;
-(UIImage *)notificationSymbolImage;
-(void)setNotificationSymbolImage:(UIImage *)arg1 ;
@end

