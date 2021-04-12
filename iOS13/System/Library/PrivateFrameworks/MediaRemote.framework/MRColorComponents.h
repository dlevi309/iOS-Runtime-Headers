/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@class _MRColorProtobuf;

@interface MRColorComponents : NSObject {

	float _red;
	float _green;
	float _blue;
	float _alpha;

}

@property (nonatomic,readonly) _MRColorProtobuf * protobuf; 
@property (nonatomic,readonly) float red;                                //@synthesize red=_red - In the implementation block
@property (nonatomic,readonly) float green;                              //@synthesize green=_green - In the implementation block
@property (nonatomic,readonly) float blue;                               //@synthesize blue=_blue - In the implementation block
@property (nonatomic,readonly) float alpha;                              //@synthesize alpha=_alpha - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(float)red;
-(float)green;
-(float)blue;
-(float)alpha;
-(_MRColorProtobuf *)protobuf;
-(id)initWithProtobuf:(id)arg1 ;
@end

