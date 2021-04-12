/*
* Generated on Thursday, January 14, 2021 at 2:28:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
*/


@protocol CNVCardPerson;
#import <vCard/vCard-Structs.h>
@class CNVCardWritingOptions;

@interface CNVCard30PHOTOHelper : NSObject {

	id<CNVCardPerson> _person;
	CNVCardWritingOptions* _options;
	unsigned long long _maxBytes;

}

@property (nonatomic,readonly) id<CNVCardPerson> person;                     //@synthesize person=_person - In the implementation block
@property (nonatomic,readonly) CNVCardWritingOptions * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) unsigned long long maxBytes;                  //@synthesize maxBytes=_maxBytes - In the implementation block
-(id<CNVCardPerson>)person;
-(id)init;
-(CNVCardWritingOptions *)options;
-(id)image;
-(id)description;
-(id)largeImage;
-(id)initWithPerson:(id)arg1 options:(id)arg2 maximumDataLength:(unsigned long long)arg3 ;
-(id)bestEffortImage;
-(unsigned long long)maxBytes;
-(id)scaleImage:(id)arg1 toFitSizes:(id)arg2 allowableCompressionQuality:(id)arg3 ;
-(id)compressImage:(id)arg1 allowableCompressions:(id)arg2 ;
-(id)scaleImage:(id)arg1 toFit:(CGSize)arg2 allowableCompressionQuality:(id)arg3 ;
@end

