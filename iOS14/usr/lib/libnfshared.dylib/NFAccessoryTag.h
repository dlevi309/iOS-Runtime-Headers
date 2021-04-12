/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnfshared.dylib
*/


@protocol NFAccessoryTagDelegate;
@interface NFAccessoryTag : NSObject {

	id<NFAccessoryTagDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<NFAccessoryTagDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<NFAccessoryTagDelegate>)delegate;
-(void)setDelegate:(id<NFAccessoryTagDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
@end

