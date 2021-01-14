/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _UIStatusBarIdentifier : NSObject <NSCopying> {

	id _object;
	NSString* _string;

}

@property (nonatomic,copy,readonly) NSString * stringRepresentation; 
@property (nonatomic,copy) id object;                                             //@synthesize object=_object - In the implementation block
@property (nonatomic,copy) NSString * string;                                     //@synthesize string=_string - In the implementation block
+(id)uninternedIdentifierForObject:(id)arg1 string:(id)arg2 ;
+(id)displayIdentifierFromStringRepresentation:(id)arg1 ;
+(id)identifierForObject:(id)arg1 string:(id)arg2 ;
-(NSString *)stringRepresentation;
-(id)object;
-(void)setObject:(id)arg1 ;
-(id)description;
-(NSString *)string;
-(void)setString:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

