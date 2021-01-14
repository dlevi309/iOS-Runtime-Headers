/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/

#import <PodcastsKit/PodcastsKit-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSArray;

@interface MTGenre : NSObject <NSCoding> {

	NSString* _name;
	NSString* _identifier;
	NSArray* _children;

}

@property (nonatomic,retain) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSArray * children;                 //@synthesize children=_children - In the implementation block
-(NSArray *)children;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setChildren:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

