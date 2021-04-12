/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
*/


#import <Espresso/Espresso-Structs.h>
@interface ETTaskState : NSObject {

	shared_ptr<Espresso::net>* _networkPointer;
	unordered_map<std::__1::basic_string<char>, std::__1::shared_ptr<Espresso::blob<float, 4> >, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::shared_ptr<Espresso::blob<float, 4> > > > >* _blobs;

}

@property (assign) unordered_map<std::__1::basic_string<char> blobs;              //@synthesize blobs=_blobs - In the implementation block
@property (assign) shared_ptr<Espresso::net>* networkPointer;                     //@synthesize networkPointer=_networkPointer - In the implementation block
-(unordered_map<std::__1::basic_string<char>)blobs;
-(id)initWithNetwork:(shared_ptr<Espresso::net>*)arg1 ;
-(id)initWithBlobMap:(unordered_map<std::__1::basic_string<char>, std::__1::shared_ptr<Espresso::blob<float, 4> >, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::shared_ptr<Espresso::blob<float, 4> > > > >*)arg1 ;
-(void)setBlobs:(unordered_map<std::__1::basic_string<char>)arg1 ;
-(shared_ptr<Espresso::net>*)networkPointer;
-(void)setNetworkPointer:(shared_ptr<Espresso::net>*)arg1 ;
@end

