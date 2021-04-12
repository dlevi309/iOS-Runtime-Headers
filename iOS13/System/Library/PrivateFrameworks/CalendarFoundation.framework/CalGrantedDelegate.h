/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CalGrantedDelegate : NSObject <NSSecureCoding> {

	NSString* _uri;
	NSString* _displayName;
	NSString* _preferredUserAddress;
	long long _permission;

}

@property (nonatomic,copy) NSString * uri;                               //@synthesize uri=_uri - In the implementation block
@property (nonatomic,copy) NSString * displayName;                       //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * preferredUserAddress;              //@synthesize preferredUserAddress=_preferredUserAddress - In the implementation block
@property (assign,nonatomic) long long permission;                       //@synthesize permission=_permission - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(long long)permission;
-(void)setPermission:(long long)arg1 ;
-(NSString *)uri;
-(void)setUri:(NSString *)arg1 ;
-(NSString *)preferredUserAddress;
-(void)setPreferredUserAddress:(NSString *)arg1 ;
@end

