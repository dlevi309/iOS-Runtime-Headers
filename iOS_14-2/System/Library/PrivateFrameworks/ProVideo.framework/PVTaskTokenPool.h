/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


@protocol PVTaskTokenPoolDelegate;
#import <ProVideo/ProVideo-Structs.h>
@interface PVTaskTokenPool : NSObject {

	unsigned long long _tokenCounter;
	stack<unsigned long, std::__1::deque<unsigned long, std::__1::allocator<unsigned long> > >* _tokenData;
	mutex _tokenLock;
	id<PVTaskTokenPoolDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PVTaskTokenPoolDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<PVTaskTokenPoolDelegate>)delegate;
-(void)setDelegate:(id<PVTaskTokenPoolDelegate>)arg1 ;
-(void)returnToken:(id)arg1 ;
-(id)initWithOffset:(unsigned long long)arg1 ;
-(id)getToken;
@end

