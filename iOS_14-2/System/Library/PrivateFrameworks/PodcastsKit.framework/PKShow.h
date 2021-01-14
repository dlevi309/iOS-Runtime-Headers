/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/

#import <PodcastsKit/PodcastsKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, PKShowStoreId;

@interface PKShow : NSObject <NSSecureCoding> {

	 title;
	 descriptionText;
	 storeId;
	 uuid;
	 feedUrl;
	 podcastUuid;
	 artworkDictionary;

}

@property (readonly,nonatomic) BOOL isInLibrary; 
@property (readonly,nonatomic) BOOL isSubscribed; 
@property (readonly,nonatomic) NSString * title; 
@property (readonly,nonatomic) NSString * descriptionText; 
@property (readonly,nonatomic) PKShowStoreId * storeId; 
+(BOOL)supportsSecureCoding;
+(void)setSupportsSecureCoding:(BOOL)arg1 ;
-(PKShowStoreId *)storeId;
-(id)init;
-(NSString *)descriptionText;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isSubscribed;
-(NSString *)title;
-(BOOL)isInLibrary;
-(id)artworkUrlFor:(CGSize)arg1 ;
@end

