/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class MKMapItem, NSString, CPTextButton, NSUUID, CPImageSet, UIImage;

@interface CPPointOfInterest : NSObject <NSSecureCoding> {

	MKMapItem* _location;
	NSString* _title;
	NSString* _subtitle;
	NSString* _summary;
	NSString* _detailTitle;
	NSString* _detailSubtitle;
	NSString* _detailSummary;
	CPTextButton* _primaryButton;
	CPTextButton* _secondaryButton;
	id _userInfo;
	NSUUID* _identifier;
	CPImageSet* _pinImageSet;

}

@property (nonatomic,readonly) NSUUID * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) CPImageSet * pinImageSet;                    //@synthesize pinImageSet=_pinImageSet - In the implementation block
@property (nonatomic,retain) MKMapItem * location;                        //@synthesize location=_location - In the implementation block
@property (nonatomic,copy) NSString * title;                              //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                           //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * summary;                            //@synthesize summary=_summary - In the implementation block
@property (nonatomic,copy) NSString * detailTitle;                        //@synthesize detailTitle=_detailTitle - In the implementation block
@property (nonatomic,copy) NSString * detailSubtitle;                     //@synthesize detailSubtitle=_detailSubtitle - In the implementation block
@property (nonatomic,copy) NSString * detailSummary;                      //@synthesize detailSummary=_detailSummary - In the implementation block
@property (nonatomic,retain) UIImage * pinImage; 
@property (nonatomic,retain) CPTextButton * primaryButton;                //@synthesize primaryButton=_primaryButton - In the implementation block
@property (nonatomic,retain) CPTextButton * secondaryButton;              //@synthesize secondaryButton=_secondaryButton - In the implementation block
@property (nonatomic,retain) id userInfo;                                 //@synthesize userInfo=_userInfo - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setUserInfo:(id)arg1 ;
-(void)setPrimaryButton:(CPTextButton *)arg1 ;
-(void)setSecondaryButton:(CPTextButton *)arg1 ;
-(id)userInfo;
-(MKMapItem *)location;
-(NSString *)subtitle;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setLocation:(MKMapItem *)arg1 ;
-(NSString *)summary;
-(CPTextButton *)primaryButton;
-(CPTextButton *)secondaryButton;
-(id)initWithCoder:(id)arg1 ;
-(UIImage *)pinImage;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSUUID *)identifier;
-(void)setSummary:(NSString *)arg1 ;
-(void)setDetailTitle:(NSString *)arg1 ;
-(void)setDetailSubtitle:(NSString *)arg1 ;
-(NSString *)detailTitle;
-(NSString *)detailSubtitle;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
-(void)setPinImage:(UIImage *)arg1 ;
-(CPImageSet *)pinImageSet;
-(NSString *)detailSummary;
-(BOOL)isEqualToPointOfInterest:(id)arg1 ;
-(id)initWithLocation:(id)arg1 title:(id)arg2 subtitle:(id)arg3 summary:(id)arg4 detailTitle:(id)arg5 detailSubtitle:(id)arg6 detailSummary:(id)arg7 pinImage:(id)arg8 ;
-(void)setDetailSummary:(NSString *)arg1 ;
-(void)setPinImageSet:(CPImageSet *)arg1 ;
@end

