/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
*/

#import <libobjc.A.dylib/BMBookmark.h>

@protocol BMBookmark;
@class NSArray, NSString;

@interface BMBookmarkNode : NSObject <BMBookmark> {

	NSArray* _upstreams;
	id<BMBookmark> _value;
	NSString* _name;

}

@property (nonatomic,retain) NSArray * upstreams;                   //@synthesize upstreams=_upstreams - In the implementation block
@property (nonatomic,retain) id<BMBookmark> value;                  //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithValue:(id)arg1 upstreams:(id)arg2 name:(id)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(void)setValue:(id<BMBookmark>)arg1 ;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)upstreams;
-(void)setUpstreams:(NSArray *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)descriptionAtLevel:(long long)arg1 ;
-(id<BMBookmark>)value;
@end

