/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
*/

#import <PeopleSuggester/PeopleSuggester-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface _PSContactSuggestionHandleAndApp : NSObject <NSCopying, NSSecureCoding> {

	NSString* _handle;
	NSString* _appBundleId;
	NSNumber* _interactionMechanism;

}

@property (nonatomic,copy) NSString * handle;                            //@synthesize handle=_handle - In the implementation block
@property (nonatomic,copy) NSString * appBundleId;                       //@synthesize appBundleId=_appBundleId - In the implementation block
@property (nonatomic,copy) NSNumber * interactionMechanism;              //@synthesize interactionMechanism=_interactionMechanism - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setHandle:(NSString *)arg1 ;
-(void)setAppBundleId:(NSString *)arg1 ;
-(NSString *)handle;
-(NSString *)appBundleId;
-(void)setInteractionMechanism:(NSNumber *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSNumber *)interactionMechanism;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

