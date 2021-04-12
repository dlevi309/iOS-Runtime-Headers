/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/


@class NSURL;

@interface LPImageRemoteURLRepresentation : NSObject {

	unsigned long long _scale;
	NSURL* _URL;

}

@property (nonatomic,readonly) unsigned long long scale;              //@synthesize scale=_scale - In the implementation block
@property (nonatomic,retain,readonly) NSURL * URL;                    //@synthesize URL=_URL - In the implementation block
-(NSURL *)URL;
-(unsigned long long)scale;
-(id)initWithScale:(unsigned long long)arg1 URL:(id)arg2 ;
@end

