/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class TUHandle, NSString, NSArray, NSSet;

@interface TUConversationMember : NSObject <NSCopying, NSSecureCoding> {

	TUHandle* _handle;

}

@property (nonatomic,copy,readonly) NSString * idsDestination; 
@property (nonatomic,copy,readonly) NSArray * idsDestinations; 
@property (nonatomic,readonly) TUHandle * handle;                           //@synthesize handle=_handle - In the implementation block
@property (nonatomic,copy,readonly) NSSet * handles; 
+(BOOL)supportsSecureCoding;
-(id)initWithHandle:(id)arg1 ;
-(NSSet *)handles;
-(TUHandle *)handle;
-(id)initWithDestination:(id)arg1 ;
-(id)initWithDestinations:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithContact:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)idsDestination;
-(NSArray *)idsDestinations;
-(id)initWithHandles:(id)arg1 ;
-(id)initWithContact:(id)arg1 additionalHandles:(id)arg2 ;
-(BOOL)isEqualToMember:(id)arg1 ;
-(BOOL)representsSameMemberAs:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

