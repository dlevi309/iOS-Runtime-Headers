/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/


@class NSDictionary;

@interface SFMessageSessionRequestEntry : NSObject {

	BOOL _allowUnencrypted;
	/*^block*/id _handler;
	NSDictionary* _options;

}

@property (assign,nonatomic) BOOL allowUnencrypted;              //@synthesize allowUnencrypted=_allowUnencrypted - In the implementation block
@property (nonatomic,copy) id handler;                           //@synthesize handler=_handler - In the implementation block
@property (nonatomic,copy) NSDictionary * options;               //@synthesize options=_options - In the implementation block
-(void)setHandler:(id)arg1 ;
-(NSDictionary *)options;
-(void)setOptions:(NSDictionary *)arg1 ;
-(BOOL)allowUnencrypted;
-(void)setAllowUnencrypted:(BOOL)arg1 ;
-(id)handler;
@end

