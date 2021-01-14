/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <EmailFoundation/EmailFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface EFPathComponent : NSObject <NSCopying> {

	NSString* _sanitizedString;

}

@property (nonatomic,copy,readonly) NSString * sanitizedString;                                          //@synthesize sanitizedString=_sanitizedString - In the implementation block
@property (nonatomic,readonly) unsigned long long length; 
@property (nonatomic,copy,readonly) NSString * pathExtension; 
@property (nonatomic,copy,readonly) EFPathComponent * pathComponentByDeletingPathExtension; 
+(id)pathComponentWithString:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(id)debugDescription;
-(unsigned long long)length;
-(NSString *)sanitizedString;
-(id)description;
-(id)subpathToIndex:(unsigned long long)arg1 ;
-(EFPathComponent *)pathComponentByDeletingPathExtension;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)pathExtension;
-(BOOL)isEqual:(id)arg1 ;
@end

