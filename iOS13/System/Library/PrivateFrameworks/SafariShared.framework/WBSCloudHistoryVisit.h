/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class WBSHistoryVisitIdentifier, NSString, NSDictionary;

@interface WBSCloudHistoryVisit : NSObject <NSSecureCoding> {

	BOOL _loadSuccessful;
	BOOL _httpNonGet;
	WBSHistoryVisitIdentifier* _visitIdentifier;
	NSString* _title;
	WBSHistoryVisitIdentifier* _redirectSourceVisitIdentifier;
	WBSCloudHistoryVisit* _redirectSourceVisit;
	WBSHistoryVisitIdentifier* _redirectDestinationVisitIdentifier;
	WBSCloudHistoryVisit* _redirectDestinationVisit;

}

@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,copy) WBSHistoryVisitIdentifier * visitIdentifier;                                 //@synthesize visitIdentifier=_visitIdentifier - In the implementation block
@property (nonatomic,copy) NSString * title;                                                            //@synthesize title=_title - In the implementation block
@property (assign,getter=loadWasSuccessful,nonatomic) BOOL loadSuccessful;                              //@synthesize loadSuccessful=_loadSuccessful - In the implementation block
@property (assign,getter=wasHTTPNonGet,nonatomic) BOOL httpNonGet;                                      //@synthesize httpNonGet=_httpNonGet - In the implementation block
@property (nonatomic,copy) WBSHistoryVisitIdentifier * redirectSourceVisitIdentifier;                   //@synthesize redirectSourceVisitIdentifier=_redirectSourceVisitIdentifier - In the implementation block
@property (assign,nonatomic,__weak) WBSCloudHistoryVisit * redirectSourceVisit;                         //@synthesize redirectSourceVisit=_redirectSourceVisit - In the implementation block
@property (nonatomic,copy) WBSHistoryVisitIdentifier * redirectDestinationVisitIdentifier;              //@synthesize redirectDestinationVisitIdentifier=_redirectDestinationVisitIdentifier - In the implementation block
@property (assign,nonatomic,__weak) WBSCloudHistoryVisit * redirectDestinationVisit;                    //@synthesize redirectDestinationVisit=_redirectDestinationVisit - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(id)initWithHistoryVisit:(id)arg1 ;
-(WBSHistoryVisitIdentifier *)visitIdentifier;
-(WBSHistoryVisitIdentifier *)redirectSourceVisitIdentifier;
-(void)setRedirectSourceVisit:(WBSCloudHistoryVisit *)arg1 ;
-(void)setRedirectDestinationVisit:(WBSCloudHistoryVisit *)arg1 ;
-(WBSCloudHistoryVisit *)redirectSourceVisit;
-(WBSCloudHistoryVisit *)redirectDestinationVisit;
-(BOOL)wasHTTPNonGet;
-(BOOL)loadWasSuccessful;
-(id)initWithVisitIdentifier:(id)arg1 title:(id)arg2 loadSuccessful:(BOOL)arg3 httpNonGet:(BOOL)arg4 redirectSourceVisitIdentifier:(id)arg5 redirectDestinationVisitIdentifier:(id)arg6 ;
-(void)setVisitIdentifier:(WBSHistoryVisitIdentifier *)arg1 ;
-(void)setLoadSuccessful:(BOOL)arg1 ;
-(void)setHttpNonGet:(BOOL)arg1 ;
-(void)setRedirectSourceVisitIdentifier:(WBSHistoryVisitIdentifier *)arg1 ;
-(WBSHistoryVisitIdentifier *)redirectDestinationVisitIdentifier;
-(void)setRedirectDestinationVisitIdentifier:(WBSHistoryVisitIdentifier *)arg1 ;
@end

