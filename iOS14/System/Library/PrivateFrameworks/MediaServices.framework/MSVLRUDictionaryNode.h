/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
*/

#import <MediaServices/MediaServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MSVLRUDictionaryNode : NSObject <NSCopying> {

	id _key;
	id _object;
	MSVLRUDictionaryNode* _next;
	MSVLRUDictionaryNode* _prev;

}

@property (nonatomic,readonly) id key;                                        //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) id object;                                       //@synthesize object=_object - In the implementation block
@property (assign,nonatomic,__weak) MSVLRUDictionaryNode * next;              //@synthesize next=_next - In the implementation block
@property (assign,nonatomic,__weak) MSVLRUDictionaryNode * prev;              //@synthesize prev=_prev - In the implementation block
-(MSVLRUDictionaryNode *)next;
-(id)object;
-(void)setObject:(id)arg1 ;
-(void)setPrev:(MSVLRUDictionaryNode *)arg1 ;
-(id)initWithKey:(id)arg1 object:(id)arg2 ;
-(void)setNext:(MSVLRUDictionaryNode *)arg1 ;
-(id)key;
-(MSVLRUDictionaryNode *)prev;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

