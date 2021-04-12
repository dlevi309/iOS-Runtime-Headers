/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class DMFControlSessionIdentifier, NSString, NSData;

@interface CRKInstructor : NSObject <NSSecureCoding> {

	DMFControlSessionIdentifier* _sessionIdentifier;
	NSString* _userIdentifier;
	NSString* _displayName;
	NSString* _courseName;
	NSData* _imageData;

}

@property (nonatomic,copy) DMFControlSessionIdentifier * sessionIdentifier;              //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * userIdentifier;                                    //@synthesize userIdentifier=_userIdentifier - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                       //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * courseName;                                        //@synthesize courseName=_courseName - In the implementation block
@property (nonatomic,retain) NSData * imageData;                                         //@synthesize imageData=_imageData - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)userIdentifier;
-(void)setUserIdentifier:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSessionIdentifier:(DMFControlSessionIdentifier *)arg1 ;
-(DMFControlSessionIdentifier *)sessionIdentifier;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSData *)imageData;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)displayName;
-(void)setImageData:(NSData *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isEqualToInstructor:(id)arg1 ;
-(NSString *)courseName;
-(void)setCourseName:(NSString *)arg1 ;
@end

