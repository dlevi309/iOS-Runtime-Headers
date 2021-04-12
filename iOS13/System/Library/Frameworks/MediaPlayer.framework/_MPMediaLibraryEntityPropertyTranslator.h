/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@interface _MPMediaLibraryEntityPropertyTranslator : NSObject {

	/*^block*/id _sortTransformer;
	/*^block*/id _valueTransformer;
	shared_ptr<std::__1::map<std::__1::basic_string<char>, mlcore::ModelPropertyBase *, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, mlcore::ModelPropertyBase *> > > >* _propertiesToFetchMap;
	shared_ptr<std::__1::map<std::__1::basic_string<char>, mlcore::ModelPropertyBase *, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, mlcore::ModelPropertyBase *> > > >* _propertiesToSortMap;

}

@property (assign,nonatomic) shared_ptr<std::__1::map<std::__1::basic_string<char> propertiesToFetchMap;              //@synthesize propertiesToFetchMap=_propertiesToFetchMap - In the implementation block
@property (assign,nonatomic) shared_ptr<std::__1::map<std::__1::basic_string<char> propertiesToSortMap;               //@synthesize propertiesToSortMap=_propertiesToSortMap - In the implementation block
@property (nonatomic,copy) id sortTransformer;                                                                        //@synthesize sortTransformer=_sortTransformer - In the implementation block
@property (nonatomic,copy) id valueTransformer;                                                                       //@synthesize valueTransformer=_valueTransformer - In the implementation block
-(id)valueTransformer;
-(shared_ptr<std::__1::map<std::__1::basic_string<char>)propertiesToFetchMap;
-(void)setPropertiesToFetchMap:(shared_ptr<std::__1::map<std::__1::basic_string<char>)arg1 ;
-(shared_ptr<std::__1::map<std::__1::basic_string<char>)propertiesToSortMap;
-(void)setPropertiesToSortMap:(shared_ptr<std::__1::map<std::__1::basic_string<char>)arg1 ;
-(id)sortTransformer;
-(void)setSortTransformer:(id)arg1 ;
-(void)setValueTransformer:(id)arg1 ;
@end

