/*
* Generated on Thursday, January 14, 2021 at 2:27:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailAddressing.framework/EmailAddressing
*/

#import <EmailAddressing/EmailAddressing-Structs.h>
#import <libobjc.A.dylib/EFLoggable.h>

@class NSString;

@interface EAEmailAddressParser : NSObject <EFLoggable>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
+(id)displayNameFromAddress:(id)arg1 ;
+(id)rawAddressFromFullAddress:(id)arg1 ;
+(NSRange)rangeOfAddressDomainFromAddress:(id)arg1 ;
+(id)idnaEncodedAddressForAddress:(id)arg1 ;
+(id)rawAddressFromFullAddress:(id)arg1 cacheResults:(BOOL)arg2 ;
+(id)displayNameFromAddress:(id)arg1 cacheResults:(BOOL)arg2 ;
+(id)idnaDecodedAddressForAddress:(id)arg1 ;
+(BOOL)isLegalEmailAddress:(id)arg1 ;
+(id)addressDomainFromAddress:(id)arg1 ;
+(id)rawAddressRespectingGroupsFromFullAddress:(id)arg1 ;
+(void)_componentsForFullAddress:(id)arg1 rawAddressIndexes:(id*)arg2 localPartIndexes:(id*)arg3 domainIndexes:(id*)arg4 ;
+(void)insertPreviousRoute:(unsigned short*)arg1 ofLength:(unsigned long long)arg2 toBuffer:(unsigned short*)arg3 ofLength:(unsigned long long)arg4 atPosition:(unsigned short*)arg5 addSpace:(BOOL)arg6 ;
+(id)_stringByDecodingIDNAString:(id)arg1 inRange:(NSRange)arg2 ;
+(id)_stringByEncodingIDNAString:(id)arg1 inRange:(NSRange)arg2 ;
+(BOOL)addressIsEmptyGroup:(id)arg1 ;
+(id)localPartFromAddress:(id)arg1 ;
@end

