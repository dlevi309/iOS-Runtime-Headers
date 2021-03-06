/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/


@class NSURL, UIImage, NSString, NSDictionary;

@interface WBSPhishingClassifierResults : NSObject {

	float _confidence;
	NSURL* _url;
	UIImage* _image;
	unsigned long long _classification;
	NSString* _identifier;

}

@property (nonatomic,readonly) NSURL * url;                                          //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) UIImage * image;                                      //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) unsigned long long classification;                    //@synthesize classification=_classification - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) float confidence;                                     //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
-(float)confidence;
-(NSDictionary *)dictionaryRepresentation;
-(NSURL *)url;
-(UIImage *)image;
-(unsigned long long)classification;
-(NSString *)identifier;
-(id)initWithURL:(id)arg1 image:(id)arg2 classification:(unsigned long long)arg3 identifier:(id)arg4 confidence:(float)arg5 ;
@end

