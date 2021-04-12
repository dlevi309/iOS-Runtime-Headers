/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
*/


#import <Espresso/Espresso-Structs.h>
@interface ETTaskState : NSObject {

	shared_ptr<Espresso::net>* _networkPointer;
	unordered_map<std::__1::basic_string<char>, std::__1::shared_ptr<Espresso::blob<float, 4> >, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::shared_ptr<Espresso::blob<float, 4> > > > >* _blobs;

}

@property (assign) unordered_map<std::__1::basic_string<char> blobs;              //@synthesize blobs=_blobs - In the implementation block
@property (assign) shared_ptr<Espresso::net>* networkPointer;                     //@synthesize networkPointer=_networkPointer - In the implementation block
-(id)initWithNetwork:(shared_ptr<Espresso::net>*)arg1 ;
-(id)initWithBlobMap:(unordered_map<std::__1::basic_string<char>, std::__1::shared_ptr<Espresso::blob<float, 4> >, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::shared_ptr<Espresso::blob<float, 4> > > > >*)arg1 ;
-(unordered_map<std::__1::basic_string<char>)blobs;
-(void)setBlobs:(unordered_map<std::__1::basic_string<char>)arg1 ;
-(void)setNetworkPointer:(shared_ptr<Espresso::net>*)arg1 ;
-(shared_ptr<Espresso::net>*)networkPointer;
@end

