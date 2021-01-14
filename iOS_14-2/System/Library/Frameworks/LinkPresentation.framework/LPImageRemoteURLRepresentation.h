/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/


@class NSURL;

@interface LPImageRemoteURLRepresentation : NSObject {

	unsigned long long _scale;
	NSURL* _URL;

}

@property (nonatomic,readonly) unsigned long long scale;              //@synthesize scale=_scale - In the implementation block
@property (nonatomic,retain,readonly) NSURL * URL;                    //@synthesize URL=_URL - In the implementation block
-(id)initWithScale:(unsigned long long)arg1 URL:(id)arg2 ;
-(unsigned long long)scale;
-(NSURL *)URL;
@end

