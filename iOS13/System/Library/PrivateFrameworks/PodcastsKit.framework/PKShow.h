/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isSubscribed;
-(BOOL)isInLibrary;
-(id)artworkUrlFor:(CGSize)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)title;
-(NSString *)descriptionText;
-(PKShowStoreId *)storeId;
@end

