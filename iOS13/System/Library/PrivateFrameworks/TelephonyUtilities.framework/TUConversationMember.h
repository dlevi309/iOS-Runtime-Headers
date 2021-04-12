/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(TUHandle *)handle;
-(NSSet *)handles;
-(id)initWithHandle:(id)arg1 ;
-(NSString *)idsDestination;
-(id)initWithDestination:(id)arg1 ;
-(id)initWithDestinations:(id)arg1 ;
-(id)initWithContact:(id)arg1 ;
-(id)initWithHandles:(id)arg1 ;
-(id)initWithContact:(id)arg1 additionalHandles:(id)arg2 ;
-(BOOL)isEqualToMember:(id)arg1 ;
-(NSArray *)idsDestinations;
-(BOOL)representsSameMemberAs:(id)arg1 ;
@end

