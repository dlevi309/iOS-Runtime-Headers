/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)handler;
-(NSDictionary *)options;
-(void)setHandler:(id)arg1 ;
-(void)setOptions:(NSDictionary *)arg1 ;
-(BOOL)allowUnencrypted;
-(void)setAllowUnencrypted:(BOOL)arg1 ;
@end

