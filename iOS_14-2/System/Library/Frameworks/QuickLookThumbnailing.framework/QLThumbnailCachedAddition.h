/*
* Generated on Thursday, January 14, 2021 at 2:27:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
*/


@class GSAddition;

@interface QLThumbnailCachedAddition : NSObject {

	GSAddition* _addition;
	unsigned long long _fileID;

}

@property (retain) GSAddition * addition;              //@synthesize addition=_addition - In the implementation block
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(GSAddition *)addition;
-(void)setAddition:(GSAddition *)arg1 ;
-(id)initWithAddition:(id)arg1 ;
-(BOOL)isStillValid;
@end

