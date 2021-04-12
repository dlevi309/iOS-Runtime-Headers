/*
* Generated on Monday, March 1, 2021 at 2:30:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SFCardSectionEngagementFeedback.h>

@class NSData;

@interface SFMapCardSectionEngagementFeedback : SFCardSectionEngagementFeedback {

	NSData* _modifiedPlacemarkData;

}

@property (nonatomic,retain) NSData * modifiedPlacemarkData;              //@synthesize modifiedPlacemarkData=_modifiedPlacemarkData - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)modifiedPlacemarkData;
-(void)setModifiedPlacemarkData:(NSData *)arg1 ;
@end

