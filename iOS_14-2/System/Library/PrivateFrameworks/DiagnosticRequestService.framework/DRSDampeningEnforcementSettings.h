/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/DiagnosticRequestService
*/


@interface DRSDampeningEnforcementSettings : NSObject {

	BOOL _enforcesResourceHysteresis;
	BOOL _enforcesResourceCap;
	BOOL _enforcesResourceDownsampling;
	BOOL _enforcesSignatureHysteresis;
	BOOL _enforcesSignatureCap;
	BOOL _enforcesSignatureDownsampling;
	BOOL _enforcesTotalCap;

}

@property (assign,nonatomic) BOOL enforcesResourceHysteresis;                 //@synthesize enforcesResourceHysteresis=_enforcesResourceHysteresis - In the implementation block
@property (assign,nonatomic) BOOL enforcesResourceCap;                        //@synthesize enforcesResourceCap=_enforcesResourceCap - In the implementation block
@property (assign,nonatomic) BOOL enforcesResourceDownsampling;               //@synthesize enforcesResourceDownsampling=_enforcesResourceDownsampling - In the implementation block
@property (assign,nonatomic) BOOL enforcesSignatureHysteresis;                //@synthesize enforcesSignatureHysteresis=_enforcesSignatureHysteresis - In the implementation block
@property (assign,nonatomic) BOOL enforcesSignatureCap;                       //@synthesize enforcesSignatureCap=_enforcesSignatureCap - In the implementation block
@property (assign,nonatomic) BOOL enforcesSignatureDownsampling;              //@synthesize enforcesSignatureDownsampling=_enforcesSignatureDownsampling - In the implementation block
@property (assign,nonatomic) BOOL enforcesTotalCap;                           //@synthesize enforcesTotalCap=_enforcesTotalCap - In the implementation block
-(id)init;
-(id)debugDescription;
-(BOOL)isEqual:(id)arg1 ;
-(void)setAllEnforcement:(BOOL)arg1 ;
-(void)setEnforcesResourceHysteresis:(BOOL)arg1 ;
-(void)setEnforcesResourceCap:(BOOL)arg1 ;
-(void)setEnforcesResourceDownsampling:(BOOL)arg1 ;
-(void)setEnforcesSignatureHysteresis:(BOOL)arg1 ;
-(void)setEnforcesSignatureCap:(BOOL)arg1 ;
-(void)setEnforcesSignatureDownsampling:(BOOL)arg1 ;
-(void)setEnforcesTotalCap:(BOOL)arg1 ;
-(BOOL)enforcesResourceHysteresis;
-(BOOL)enforcesResourceCap;
-(BOOL)enforcesResourceDownsampling;
-(BOOL)enforcesSignatureHysteresis;
-(BOOL)enforcesSignatureCap;
-(BOOL)enforcesSignatureDownsampling;
-(BOOL)enforcesTotalCap;
-(id)jsonCompatibleDictRepresentation;
-(id)initWithMO:(id)arg1 ;
-(id)_moRepresentation:(id)arg1 ;
@end

