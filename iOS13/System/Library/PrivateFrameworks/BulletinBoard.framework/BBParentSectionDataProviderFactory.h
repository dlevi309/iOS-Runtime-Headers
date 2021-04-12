/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
*/

#import <libobjc.A.dylib/BBSectionIdentity.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class BBSectionInfo, NSString;

@interface BBParentSectionDataProviderFactory : NSObject <BBSectionIdentity, NSSecureCoding> {

	BBSectionInfo* _sectionInfo;
	NSString* _universalSectionIdentifier;

}

@property (nonatomic,copy) BBSectionInfo * sectionInfo;                        //@synthesize sectionInfo=_sectionInfo - In the implementation block
@property (nonatomic,copy) NSString * universalSectionIdentifier;              //@synthesize universalSectionIdentifier=_universalSectionIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)factoryFromSectionInfo:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)sectionIdentifier;
-(BBSectionInfo *)sectionInfo;
-(id)sectionDisplayName;
-(void)setSectionInfo:(BBSectionInfo *)arg1 ;
-(void)setUniversalSectionIdentifier:(NSString *)arg1 ;
-(NSString *)universalSectionIdentifier;
-(id)sectionIcon;
-(id)initWithSectionInfo:(id)arg1 ;
-(id)dataProviders;
@end

