/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)identifierForObject:(id)arg1 string:(id)arg2 ;
+(id)displayIdentifierFromStringRepresentation:(id)arg1 ;
-(NSString *)string;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)object;
-(void)setString:(NSString *)arg1 ;
-(void)setObject:(id)arg1 ;
-(NSString *)stringRepresentation;
@end

